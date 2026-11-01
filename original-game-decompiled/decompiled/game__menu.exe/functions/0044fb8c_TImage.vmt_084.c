
/* ==== TImage.vmt_084 @ 0044fb8c ==== 
 * signature: undefined TImage.vmt_084(void)
 * body: 0044fb8c-0044fc3c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TImage_vmt_084(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  int aiStack_1c [4];
  undefined1 uStack_9;
  int *piStack_8;
  
  piStack_8 = param_1;
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = (int *)param_1[0x48];
    TPen_set_Style((int *)piVar1[4],1);
    TBrush_set_Style((int *)piVar1[5],'\x01');
    uStackY_2c = 0x44fbd5;
    FUN_004191b8(piVar1,0,0,piStack_8[0xf],piStack_8[0xe]);
  }
  uStack_9 = (undefined1)piStack_8[0x4f];
  *(undefined1 *)(piStack_8 + 0x4f) = 1;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  piVar1 = (int *)piStack_8[0x48];
  FUN_0044faec(piStack_8,aiStack_1c);
  FUN_00419200(piVar1,aiStack_1c,*(int **)(piStack_8[0x4a] + 4));
  *in_FS_OFFSET = uStackY_2c;
  *(undefined1 *)(piStack_8 + 0x4f) = uStack_9;
  return;
}


