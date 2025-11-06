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

void accessGranted();
void accessDenied();
bool checkPassword(const std::string& userInput);

int main() {
    std::cout << "Please enter the password to access the secure system: ";
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
    std::cout << "Access Granted. Welcome to the secure area." << std::endl;
    std::string secretMessage = "The nuclear launch codes are: Hamburger Banana";
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
    std::cout << "Secret Information: " << secretMessage << std::endl;
}

void accessDenied() {
    // --- JUNK CODE BLOCK 3 ---
    // Junk padding dependent on volatile sink
    std::string pad = std::string((g_junkSink & 3), ' ');
    g_junkSink ^= static_cast<int>(pad.size());
    // --- END JUNK CODE ---
    std::cout << pad << "\n[-] Access Denied. Incorrect password." << std::endl;
}

bool checkPassword(const std::string& userInput) {
    const std::string correctPassword = "cysLFHNW25!123";
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
