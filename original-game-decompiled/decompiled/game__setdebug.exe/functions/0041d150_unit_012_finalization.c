
/* ==== unit_012_finalization @ 0041d150 ==== 
 * signature: undefined unit_012_finalization(void)
 * body: 0041d150-0041d218
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_012_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0044764c = _DAT_0044764c + 1;
  if (_DAT_0044764c == 0) {
    FUN_00402d14(DAT_004476a4);
    FUN_00402d14(DAT_004465b8);
    FUN_00402d14(DAT_004465b4);
    FUN_0041a3d0();
    FUN_00402d14(DAT_004465bc);
    FUN_00402d14(DAT_004476a0);
    FUN_00402d14(DAT_00447694);
    FUN_00402d14(DAT_00447698);
    FUN_00402d14(DAT_0044769c);
    DeleteObject(DAT_00447648);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00447664);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
    FUN_00404260((VARIANTARG *)&DAT_004464d4,"\x0e\x0eTIdentMapEntry\b",0x12);
    FUN_00404260((VARIANTARG *)&DAT_00446384,"\x0e\x0eTIdentMapEntry\b",0x2a);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


