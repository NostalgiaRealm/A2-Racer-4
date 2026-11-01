
/* ==== FUN_00434c54 @ 00434c54 ==== 
 * signature: int __register FUN_00434c54(int param_1, int param_2)
 * body: 00434c54-00434c6b
 */

int FUN_00434c54(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0040f080(*(int *)(param_1 + 0x50),param_2);
  }
  return iVar1;
}


