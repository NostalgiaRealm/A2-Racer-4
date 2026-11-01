
/* ==== TMenuItem.vmt_034 @ 0043d96c ==== 
 * signature: undefined TMenuItem.vmt_034(void)
 * body: 0043d96c-0043d9ad
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_034(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_14 [4];
  
  puVar2 = auStack_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(short *)(param_1 + 0x8a) != 0) {
    (**(code **)(param_1 + 0x88))
              (*(undefined4 *)(param_1 + 0x8c),param_1,param_2,
               CONCAT31((int3)((uint)auStack_14 >> 8),param_4),auStack_14);
  }
  return;
}


