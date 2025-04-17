const char* AsciiCharset() {
    std::string charset;
    for (int i = 0; i < 256; i++) 
        charset += (char)i;
        
    return charset.c_str();
} 
