
/* ==== FUN_00402431 @ 00402431 ==== 
 * signature: undefined __stdcall FUN_00402431(void)
 * body: 00402431-004024c9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402431(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_0040946c == 0) {
    FUN_0040363b();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00407fa0,0x104);
  _DAT_00407f7c = &DAT_00407fa0;
  pbVar2 = &DAT_00407fa0;
  if (*DAT_00409464 != 0) {
    pbVar2 = DAT_00409464;
  }
  FUN_004024ca(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_004024ca(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_00407f64 = puVar1;
  _DAT_00407f60 = local_8 + -1;
  return;
}


