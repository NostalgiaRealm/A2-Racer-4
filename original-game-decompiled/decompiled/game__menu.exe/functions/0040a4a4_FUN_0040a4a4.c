
/* ==== FUN_0040a4a4 @ 0040a4a4 ==== 
 * signature: undefined __register FUN_0040a4a4(int param_1, int * param_2)
 * body: 0040a4a4-0040a4c7
 */

void FUN_0040a4a4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while( true ) {
    iVar1 = FUN_00403edc(param_1);
    if ((iVar1 < iVar2) || (*(char *)(param_1 + -1 + iVar2) != ' ')) break;
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2;
  return;
}


