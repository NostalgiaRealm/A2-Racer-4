
/* ==== FUN_004401c8 @ 004401c8 ==== 
 * signature: int __register FUN_004401c8(int param_1)
 * body: 004401c8-004401e0
 */

int FUN_004401c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  if (iVar1 == 0) {
    iVar1 = (**(code **)PTR_DAT_00446b78)();
    return iVar1;
  }
  return iVar1;
}


