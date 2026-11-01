
/* ==== FUN_004243f4 @ 004243f4 ==== 
 * signature: undefined __register FUN_004243f4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004243f4-00424456
 */

void FUN_004243f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((*(int *)(param_1 + 0x90) != 0) && (DAT_00447750 == 0)) &&
     ((*(ushort *)(param_1 + 0x20) & 9) == 0)) {
    local_c = param_4;
    local_14 = param_2;
    local_10 = param_3;
    local_8 = param_3;
    FUN_00425780(*(int *)(param_1 + 0x90),0xb042,param_1,&local_14);
  }
  return;
}


