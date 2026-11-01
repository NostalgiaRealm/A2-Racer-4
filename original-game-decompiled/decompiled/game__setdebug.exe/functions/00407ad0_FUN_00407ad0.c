
/* ==== FUN_00407ad0 @ 00407ad0 ==== 
 * signature: undefined4 __register FUN_00407ad0(char * param_1, char * param_2)
 * body: 00407ad0-00407af2
 */

undefined4 FUN_00407ad0(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (param_1 == (char *)0x0) {
      return 0;
    }
    if ((param_2 == (char *)0x0) || (*(int *)(param_1 + -4) != *(int *)(param_2 + -4))) {
      return 0;
    }
    iVar1 = FUN_00407a7c(param_1,param_2);
    param_1 = (char *)0x0;
    if (iVar1 != 0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


