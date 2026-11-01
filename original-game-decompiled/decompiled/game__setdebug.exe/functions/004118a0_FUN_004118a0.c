
/* ==== FUN_004118a0 @ 004118a0 ==== 
 * signature: bool __register FUN_004118a0(int param_1, undefined4 param_2, uint param_3)
 * body: 004118a0-004118b3
 */

bool FUN_004118a0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return (char)uVar1 == '\0';
}


