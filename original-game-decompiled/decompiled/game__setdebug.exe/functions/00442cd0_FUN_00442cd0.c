
/* ==== FUN_00442cd0 @ 00442cd0 ==== 
 * signature: int __register FUN_00442cd0(char * param_1, int param_2, char param_3)
 * body: 00442cd0-00442cde
 */

int FUN_00442cd0(char *param_1,int param_2,char param_3)

{
  char cVar1;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (param_3 == cVar1);
  return param_2;
}


