
/* ==== TfrmDifficulty.vmt_0e4 @ 0049d2b4 ==== 
 * signature: undefined __register TfrmDifficulty.vmt_0e4(int * param_1, int * param_2)
 * body: 0049d2b4-0049d2ee
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmDifficulty_vmt_0e4(int *param_1,int *param_2)

{
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    FUN_00403cb0(param_2,(undefined4 *)"quickdif");
  }
  else if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    TGameMenuScreen_vmt_0e4(param_1,param_2);
  }
  return;
}


