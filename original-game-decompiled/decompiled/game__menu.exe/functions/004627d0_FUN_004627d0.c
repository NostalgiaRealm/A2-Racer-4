
/* ==== FUN_004627d0 @ 004627d0 ==== 
 * signature: undefined __register FUN_004627d0(int param_1, int param_2)
 * body: 004627d0-0046280f
 */

void FUN_004627d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00462abc(param_1);
  if (iVar1 <= param_2) {
    FUN_00403c40("illegal index");
  }
  iVar1 = FUN_0045e990(*(int *)(param_1 + 8),param_2);
  FUN_0045e640(*(int *)(param_1 + 0x14),iVar1);
  return;
}


