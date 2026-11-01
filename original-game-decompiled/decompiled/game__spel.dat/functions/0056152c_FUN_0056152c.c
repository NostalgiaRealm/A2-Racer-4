
/* ==== FUN_0056152c @ 0056152c ==== 
 * signature: undefined __stdcall FUN_0056152c(void)
 * body: 0056152c-005615c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056152c(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_007503d4 == 0) {
    FUN_00561160();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_0074dd6c,0x104);
  _DAT_0074dc98 = &DAT_0074dd6c;
  pbVar2 = &DAT_0074dd6c;
  if (*DAT_00751404 != 0) {
    pbVar2 = DAT_00751404;
  }
  FUN_005615c5(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_005615c5(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_0074dc80 = puVar1;
  _DAT_0074dc7c = local_8 + -1;
  return;
}


