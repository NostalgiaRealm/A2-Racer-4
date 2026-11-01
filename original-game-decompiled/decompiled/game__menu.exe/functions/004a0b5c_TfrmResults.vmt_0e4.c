
/* ==== TfrmResults.vmt_0e4 @ 004a0b5c ==== 
 * signature: undefined TfrmResults.vmt_0e4(void)
 * body: 004a0b5c-004a0b99
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmResults_vmt_0e4(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
  if (cVar1 == '\x01') {
    FUN_00403cb0(param_2,(undefined4 *)"QUICKRES");
  }
  else if (cVar1 == '\x02') {
    TGameMenuScreen_vmt_0e4(param_1,param_2);
  }
  return;
}


