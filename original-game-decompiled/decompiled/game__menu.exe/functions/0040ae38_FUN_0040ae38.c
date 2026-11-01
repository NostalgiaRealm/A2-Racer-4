
/* ==== FUN_0040ae38 @ 0040ae38 ==== 
 * signature: undefined __register FUN_0040ae38(LCID param_1, LCTYPE param_2, undefined4 * param_3, int * param_4)
 * body: 0040ae38-0040ae81
 */

void FUN_0040ae38(LCID param_1,LCTYPE param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  CHAR local_104 [256];
  
  iVar1 = GetLocaleInfoA(param_1,param_2,local_104,0x100);
  if (iVar1 < 1) {
    FUN_00403cb0(param_4,param_3);
  }
  else {
    FUN_00403d44(param_4,(undefined4 *)local_104,iVar1 - 1);
  }
  return;
}


