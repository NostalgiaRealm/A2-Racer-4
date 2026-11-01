
/* ==== FUN_00413454 @ 00413454 ==== 
 * signature: bool __register FUN_00413454(int param_1, undefined4 param_2, uint param_3)
 * body: 00413454-00413467
 */

bool FUN_00413454(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return (char)uVar1 == '\0';
}


