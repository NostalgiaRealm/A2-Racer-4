
/* ==== TfrmStartInfo.vmt_0e4 @ 00497818 ==== 
 * signature: undefined TfrmStartInfo.vmt_0e4(void)
 * body: 00497818-0049787f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmStartInfo_vmt_0e4(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0xc) +
                   0x24);
  if (cVar1 == '\0') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT0");
    return;
  }
  if (cVar1 == '\x01') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT2");
    return;
  }
  if (cVar1 == '\x02') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT1");
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT3");
  }
  return;
}


