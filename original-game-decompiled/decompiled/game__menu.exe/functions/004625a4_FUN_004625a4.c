
/* ==== FUN_004625a4 @ 004625a4 ==== 
 * signature: undefined __register FUN_004625a4(int param_1, int param_2)
 * body: 004625a4-004625e3
 */

void FUN_004625a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00462434(param_1);
  if (iVar1 <= param_2) {
    FUN_00403c40("illegal index");
  }
  iVar1 = FUN_0045e990(*(int *)(param_1 + 0xc),param_2);
  FUN_0045e640(*(int *)(param_1 + 0x18),iVar1);
  return;
}


