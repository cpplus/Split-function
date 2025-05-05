// logic gates
bool NOT(bool a) {
    return 1 ^ a;
}

bool AND(bool a, bool b) {
    return a + b > 1;
}

bool NAND(bool a, bool b) {
    return NOT(a * b);
}

bool OR(bool a, bool b) {
    return a + b;
}

bool NOR(bool a, bool b) {
    return NOT(a + b);
}

bool XOR(bool a, bool b) {
    return a ^ b;
}

bool NXOR(bool a, bool b) {
    return 1 ^ a ^ b;
}
