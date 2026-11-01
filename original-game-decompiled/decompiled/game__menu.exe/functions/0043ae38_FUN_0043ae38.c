
/* ==== FUN_0043ae38 @ 0043ae38 ==== 
 * signature: undefined __register FUN_0043ae38(int * param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5, undefined4 param_6)
 * body: 0043ae38-0043ae83
 */

void FUN_0043ae38(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))
              (param_1,param_5,param_2,
               CONCAT31((int3)((*(uint *)(&DAT_004aa82c + (uint)*(byte *)(param_1 + 0xd) * 4) |
                               *(uint *)(&DAT_004aa83c + (uint)*(byte *)((int)param_1 + 0x37) * 4))
                              >> 8),param_4),
               *(uint *)(&DAT_004aa82c + (uint)*(byte *)(param_1 + 0xd) * 4) |
               *(uint *)(&DAT_004aa83c + (uint)*(byte *)((int)param_1 + 0x37) * 4),param_6,param_3);
  }
  return;
}


