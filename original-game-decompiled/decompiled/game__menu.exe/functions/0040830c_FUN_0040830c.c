
/* ==== FUN_0040830c @ 0040830c ==== 
 * signature: undefined4 __register FUN_0040830c(char * param_1, char * param_2)
 * body: 0040830c-0040832e
 */

undefined4 FUN_0040830c(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (param_1 == (char *)0x0) {
      return 0;
    }
    if ((param_2 == (char *)0x0) || (*(int *)(param_1 + -4) != *(int *)(param_2 + -4))) {
      return 0;
    }
    iVar1 = FUN_004082b8(param_1,param_2);
    param_1 = (char *)0x0;
    if (iVar1 != 0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


