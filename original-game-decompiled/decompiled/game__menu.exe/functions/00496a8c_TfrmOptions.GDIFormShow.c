
/* ==== TfrmOptions.GDIFormShow @ 00496a8c ==== 
 * signature: undefined TfrmOptions.GDIFormShow(void)
 * body: 00496a8c-00496b4e
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  param_1[0xe2] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x10);
  param_1[0xe3] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x14);
  param_1[0xe4] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x18);
  FUN_00481990(param_1[0xc2],param_1[0xba],param_1[0xdf]);
  FUN_00481990(param_1[0xce],param_1[0xba],param_1[0xe0]);
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),param_1[0xcf],(undefined4 *)"opt_soun");
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xd4],
               (undefined4 *)&UNK_00496b6c);
  return;
}


