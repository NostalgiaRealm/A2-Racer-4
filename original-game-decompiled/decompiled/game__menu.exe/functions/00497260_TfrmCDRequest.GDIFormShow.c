
/* ==== TfrmCDRequest.GDIFormShow @ 00497260 ==== 
 * signature: undefined TfrmCDRequest.GDIFormShow(void)
 * body: 00497260-00497299
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCDRequest_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_set_Definition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x70));
  TGDIButton_set_Definition((int *)param_1[0xbe],*(int *)(*(int *)PTR_DAT_004ab694 + 0x74));
  return;
}


