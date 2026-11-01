
/* ==== THintWindow.vmt_0c4 @ 00435d8c ==== 
 * signature: undefined4 __register THintWindow.vmt_0c4(undefined4 param_1, int param_2)
 * body: 00435d8c-00435def
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 THintWindow_vmt_0c4(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  if ((((((uVar1 < 0x100) || (0x108 < uVar1)) && (*(int *)(param_2 + 4) != 0xb000)) &&
       ((*(int *)(param_2 + 4) != 0xb001 && (*(int *)(param_2 + 4) != 0xb016)))) &&
      ((*(int *)(param_2 + 4) != 0xb017 && (*(int *)(param_2 + 4) != 0x111)))) &&
     (((*(uint *)(param_2 + 4) < 0x201 || (0x20a < *(uint *)(param_2 + 4))) &&
      (*(int *)(param_2 + 4) != 0xa0)))) {
    return 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


