for (int i=0;i<len;i++) {
		for (int j=i;j<len;j++) {
			if (answer[i] > answer[j]) {
				temp = answer[i];
				answer[i] = answer[j];
				answer[j] = temp;
			}
		}
	}