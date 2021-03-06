void cs_log(const char* format, ... );
void cs_log_debug(const char* format, ... );
void cs_log_hexdump(char* label,const unsigned char *buffer, int n);
char *cs_hexdump(int32_t m, const uchar *buf, int32_t n, char *target, int32_t len);
int32_t boundary(int32_t exp, int32_t n);
uint32_t b2i(int32_t n, const uchar *b);
uchar *i2b_buf(int32_t n, uint32_t i, uchar *b);
void cs_strncpy(char *destination, const char *source, size_t num);
void get_random_bytes_init(void);
void get_random_bytes(uint8_t *dst, uint32_t dst_len);
uint32_t crc32(uint32_t crc, const unsigned char *buf, uint32_t len);
uint32_t fletcher_crc32(uint8_t *data, uint32_t len);
void aes_set_key(struct aes_keys *aes, char *key);
void aes_decrypt(struct aes_keys *aes, uchar *buf, int32_t n);
void aes_encrypt_idx(struct aes_keys *aes, uchar *buf, int32_t n);
