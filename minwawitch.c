#include<stdio.h>
int main(){
	int month;
	
	printf("enter the number of the month\n");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			case 3:
				case 5:
					case 7:
						case 8:
							case 10:
								case 12:
									printf("31days\n");
									break ;
									case 4:
										case 6:
											case 9:
												case 11:
													printf("30days\n");
													break;
													case 2:
														printf("28days\n");
														break;
														
														
												
		
	}
	return 0;
}