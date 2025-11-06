#include <iostream>
#include <string>
#include <functional>
// --- Junk Code Elements (Start) ---
// Volatile sink to anchor junk computations and resist dead-code elimination
volatile int g_junkSink = 0;

// Opaque predicates: results are stable at runtime but non-trivial for static analysis.
static inline bool opaqueTrue() {
    auto x = std::hash<std::string>{}("fhnw_cysl") ^ 0x5f3759df; //Yes, this hex was chosen on purpose :), Quake 3 lässt grüssen..
    x ^= (x << 13);
    x ^= (x >> 7);
    x ^= (x << 17);
    return (static_cast<unsigned>(x) % 7) != 3;
}
static inline bool opaqueFalse() { return !opaqueTrue(); }

// Noisy helper that mixes input into a checksum-like value. Feeds the volatile sink
static int noisyChecksum(const std::string& s) {
    int acc = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        acc ^= (static_cast<unsigned char>(s[i]) + static_cast<int>(i * 1843216759u));
        acc = (acc << 5) | (acc >> 27);
        acc ^= 0x9e3779b9;
    }
    g_junkSink ^= acc;
    return acc;
}
// --- Junk Code Elements (End) ---
// --- Data Obfuscation (XOR Encryption) ---
static std::string getKey() {
    std::string key;
    key += (char)(opaqueFalse() + 'b');
    key += (char)(opaqueFalse() + 'a');
    key += (char)(opaqueFalse() + 'n');
    key += (char)(opaqueFalse() + 'a');
    key += (char)(opaqueFalse() + 'n');
    key += (char)(opaqueFalse() + 'e');
    key += (char)(opaqueFalse() + 'n');
    key += (char)(opaqueFalse() + 'b');
    key += (char)(opaqueFalse() + 'r');
    key += (char)(opaqueFalse() + 'o');
    key += (char)(opaqueFalse() + 't');
    return key;
}

static std::string decrypt(char* encrypted_string, size_t len, const std::string& key) {
    size_t key_len = key.length();
    for (size_t i = 0; i < len; i++) {
        encrypted_string[i] = encrypted_string[i] ^ key[i % key_len];
    }
    return std::string(encrypted_string, len);
}

// Helper macro
#define DECRYPT_STRING(var, key_str) decrypt(var, (sizeof(var) - 1), key_str)
// --- END DATA OBFUSCATION ---

void accessGranted();
void accessDenied();
bool checkPassword(const std::string& userInput);

int main() {
    // --- DATA OBFUSCATION ---
    const std::string decryption_key = getKey();
    char enc_prompt[] = { 0x32, 0x0d, 0x0b, 0x00, 0x1d, 0x00, 0x4e, 0x07, 0x1c, 0x1b, 0x11, 0x10,
        0x41, 0x1a, 0x09, 0x0b, 0x45, 0x1e, 0x03, 0x01, 0x1c, 0x03, 0x0d, 0x13, 0x0a, 0x41, 0x1a,
        0x0a, 0x4e, 0x03, 0x11, 0x0c, 0x11, 0x11, 0x12, 0x4e, 0x15, 0x06, 0x00, 0x4e, 0x11, 0x17,
        0x0c, 0x01, 0x10, 0x04, 0x4e, 0x12, 0x17, 0x16, 0x1a, 0x07, 0x1f, 0x55, 0x54, 0x62 };
    std::cout << DECRYPT_STRING(enc_prompt, decryption_key);
    // --- END DATA OBFUSCATION ---

    std::string userInput;
    std::getline(std::cin, userInput);


    // --- JUNK CODE BLOCK 1 ---
    // Junk branch and loop with side effects into volatile sink.
    // Guarded by an opaque predicate to look meaningful.
    if (opaqueFalse()) {
        int t = 0;
        for (int i = 0; i < 100 + (static_cast<int>(userInput.size()) & 3); ++i) {
            t ^= (i * 2654435761u) ^ static_cast<int>(userInput.size());
            if ((t & 7) == 5) { t += 3; }
        }
        g_junkSink ^= t;
    } else {
        g_junkSink += noisyChecksum(userInput);
    }
    // --- END JUNK CODE ---
    if (checkPassword(userInput)) {
        accessGranted();
    } else {
        accessDenied();
    }

    return 0;
}

void accessGranted() {
    // --- DATA OBFUSCATION ---
    const std::string decryption_key = getKey();
    char enc_grant[] =  { 0x23, 0x02, 0x0d, 0x04, 0x1d, 0x16, 0x4e, 0x25, 0x00,
        0x0e, 0x1a, 0x16, 0x04, 0x0a, 0x4f, 0x4e, 0x32, 0x0b, 0x0e, 0x11, 0x00,
        0x19, 0x07, 0x41, 0x1a, 0x0e, 0x4e, 0x11, 0x06, 0x07, 0x52, 0x1c, 0x11,
        0x01, 0x14, 0x1c, 0x04, 0x4e, 0x04, 0x1c, 0x07, 0x13, 0x41, 0x74 };
    std::cout << DECRYPT_STRING(enc_grant, decryption_key) << std::endl;

    char enc_secret[] = { 0x36, 0x09, 0x0b, 0x41, 0x00, 0x10, 0x0d, 0x0e, 0x17,
        0x0e, 0x06, 0x42, 0x0d, 0x0f, 0x14, 0x00, 0x06, 0x06, 0x42, 0x11, 0x00,
        0x10, 0x07, 0x12, 0x4e, 0x00, 0x1c, 0x00, 0x54, 0x42, 0x3a, 0x0e, 0x19,
        0x00, 0x14, 0x1c, 0x06, 0x0b, 0x17, 0x4e, 0x20, 0x13, 0x01, 0x15, 0x0c,
        0x00, 0x6e };
    std::string secretMessage = DECRYPT_STRING(enc_secret, decryption_key);
    // --- END DATA OBFUSCATION ---

    // --- JUNK CODE BLOCK 2 ---
    // Useless try/catch
    try {
        if (opaqueTrue()) {
            g_junkSink ^= 0x12345;
        }
    } catch (...) {
        g_junkSink ^= 0xDEAD;
    }
    // --- END JUNK CODE ---
    std::cout << secretMessage << std::endl;
}

void accessDenied() {
    // --- JUNK CODE BLOCK 3 ---
    // Junk padding dependent on volatile sink
    std::string pad = std::string((g_junkSink & 3), ' ');
    g_junkSink ^= static_cast<int>(pad.size());
    // --- END JUNK CODE ---

    // --- DATA OBFUSCATION ---
    const std::string decryption_key = getKey();
    char enc_deny[] = { 0x23, 0x02, 0x0d, 0x04, 0x1d, 0x16, 0x4e, 0x26, 0x17,
        0x01, 0x1d, 0x07, 0x05, 0x40, 0x41, 0x27, 0x0b, 0x0d, 0x0d, 0x00, 0x1d,
        0x11, 0x01, 0x15, 0x4e, 0x11, 0x0f, 0x16, 0x1d, 0x15, 0x1d, 0x1d, 0x10,
        0x4c, 0x61 };
    std::cout << DECRYPT_STRING(enc_deny, decryption_key) << std::endl;
    // --- END DATA OBFUSCATION ---
}

bool checkPassword(const std::string& userInput) {
    // --- DATA OBFUSCATION ---
    const std::string decryption_key = getKey();
    char enc_pw[] = { 0x01, 0x18, 0x1d, 0x2d, 0x28, 0x2d, 0x20, 0x35, 0x40, 0x5a, 0x55, 0x53, 0x53, 0x5d, 0x61 };
    std::string correctPassword = DECRYPT_STRING(enc_pw, decryption_key);
    // --- END DATA OBFUSCATION ---

    // --- JUNK CODE BLOCK 4 ---
    // Junk compute dependent on user input to keep paths live
    int guard = noisyChecksum(userInput);
    g_junkSink ^= (guard << 1);

    // Opaque-guarded unreachable variant path
    if (opaqueFalse()) {
        size_t matches = 0;
        for (size_t i = 0; i < userInput.size() && i < correctPassword.size(); ++i) {
            matches += (userInput[i] == static_cast<char>(correctPassword[i]));
        }
        g_junkSink ^= static_cast<int>(matches);
        return matches == correctPassword.size();
    }
    // --- END JUNK CODE ---
    if (userInput.length() != correctPassword.length()) {
        return false;
    }

    for (int i = 0; i < correctPassword.length(); ++i) {
        if (userInput[i] != correctPassword[i]) {
            return false;
        }
    }

    return true;
}
