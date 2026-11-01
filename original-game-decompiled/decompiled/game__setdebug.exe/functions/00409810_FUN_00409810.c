
/* ==== FUN_00409810 @ 00409810 ==== 
 * signature: undefined __register FUN_00409810(int param_1, int * param_2)
 * body: 00409810-00409833
 */

void FUN_00409810(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while( true ) {
    iVar1 = FUN_00403c38(param_1);
    if ((iVar1 < iVar2) || (*(char *)(param_1 + -1 + iVar2) != ' ')) break;
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2;
  return;
}


