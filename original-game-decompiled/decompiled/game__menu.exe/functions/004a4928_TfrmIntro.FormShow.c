
/* ==== TfrmIntro.FormShow @ 004a4928 ==== 
 * signature: undefined TfrmIntro.FormShow(void)
 * body: 004a4928-004a49c0;004a49e2-004a49f3
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmIntro_FormShow(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined4 auStack_18 [4];
  int *piStack_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_2c = &UNK_004a49c1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  piStack_8 = param_1;
  FUN_00403cb0((int *)(param_1[0xb4] + 0x300),(undefined4 *)param_1[0xb5]);
  FUN_004a2970((int *)piStack_8[0xb4]);
  TMediaPlayer_set_Display(piStack_8[0xb4],piStack_8);
  (**(code **)(*piStack_8 + 0x40))(piStack_8,auStack_18);
  FUN_004a3834(piStack_8[0xb4],auStack_18);
  FUN_004a36a4(piStack_8[0xb4],1);
  FUN_004a2c98((int *)piStack_8[0xb4]);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x4a49ed;
  (**(code **)(*piStack_8 + 0xb0))(piStack_8,*piStack_8,puVar1);
  return;
}


