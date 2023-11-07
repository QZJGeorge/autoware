#include <stdio.h>
#include <stdlib.h>

extern "C" char* per_to_xml(const char* pdu_type, char *per_encoded_data, int per_data_size, int* return_size);
extern "C" char* xml_to_per(const char* pdu_type, char *xer_encoded_data, int xer_data_size, int* return_size);
extern "C" char* per_to_xml_trim(const char* pdu_type, char *per_encoded_data, int per_data_size);