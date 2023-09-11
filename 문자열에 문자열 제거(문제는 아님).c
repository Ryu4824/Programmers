void RemoveString(char *ap_str,char *ap_remove_str){
	int len;
	char *p_pos;
	while(*ap_str){
		if(*ap_str++ == *ap_remove_str){
			for(len=1;ap_remove_str[len];len++){
				if(*ap_str++ != ap_remove_str[len]) break;
			}
			if(ap_remove_str[len] ==0){
				ap_str -= len;
				for(p_pos = ap_str;p_pos[len];p_pos++) *p_pos = p_pos[len];
				*p_pos = 0;
			}
		}
	}
}