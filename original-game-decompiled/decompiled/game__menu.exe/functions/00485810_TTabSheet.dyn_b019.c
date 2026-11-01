
/* ==== TTabSheet.dyn_b019 @ 00485810 ==== 
 * signature: undefined __register TTabSheet.dyn_b019(int * param_1)
 * body: 00485810-00485852;0048586e-00485895;004858af-004858b4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TTabSheet_dyn_b019(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x485822;
  TWinControl_dyn_b019((int)param_1);
  if ((char)param_1[0x5a] == '\0') {
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    *in_FS_OFFSET = uStack_20;
  }
  else {
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


