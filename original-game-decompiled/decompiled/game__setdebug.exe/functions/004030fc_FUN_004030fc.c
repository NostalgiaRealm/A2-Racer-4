
/* ==== FUN_004030fc @ 004030fc ==== 
 * signature: int __register FUN_004030fc(int param_1, undefined4 param_2, char * param_3)
 * body: 004030fc-00403119
 */

int FUN_004030fc(int param_1,undefined4 param_2,char *param_3)

{
  if (((param_3 != (char *)0x0) && (param_1 = *(int *)(param_3 + 1), *param_3 != -0x17)) &&
     (*param_3 == -0x15)) {
    param_1 = (int)(char)param_1;
  }
  return param_1;
}


