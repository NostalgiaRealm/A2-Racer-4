
/* ==== unit_008_finalization @ 0040c8a4 ==== 
 * signature: undefined unit_008_finalization(void)
 * body: 0040c8a4-0040c9d9
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_008_finalization(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  pcStack_c = thunk_FUN_00403434;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004475f4 = _DAT_004475f4 + 1;
  if (_DAT_004475f4 == 0) {
    FUN_0040bc78((undefined4 *)&DAT_00447600);
    FUN_0040baa8();
    FUN_0040b0c0();
    FUN_00404260((VARIANTARG *)&PTR_DAT_00446234,"\x0e\nTExceptRec\b",0x16);
    FUN_00404260((VARIANTARG *)&DAT_004461fc,"\x0e\tTErrorRec\b",7);
    FUN_004039b8((int *)&PTR_DAT_00446128);
    FUN_00404260((VARIANTARG *)&DAT_004475b8,&DAT_0040106c,7);
    FUN_00404260((VARIANTARG *)&DAT_00447590,&DAT_0040106c,7);
    FUN_00404260((VARIANTARG *)&DAT_00447574,&DAT_0040106c,7);
    FUN_00404260((VARIANTARG *)&DAT_00447544,&DAT_0040106c,0xc);
    FUN_00404260((VARIANTARG *)&DAT_00447514,&DAT_0040106c,0xc);
    FUN_004039b8(&DAT_00447510);
    FUN_004039b8(&DAT_0044750c);
    FUN_004039b8(&DAT_00447508);
    FUN_004039b8(&DAT_00447504);
    FUN_004039b8(&DAT_004474fc);
    FUN_004039b8(&DAT_004474f8);
    FUN_004039b8((int *)&DAT_004474ec);
    FUN_004039b8((int *)&DAT_004460d0);
    FUN_004039b8((int *)&DAT_004460bc);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


