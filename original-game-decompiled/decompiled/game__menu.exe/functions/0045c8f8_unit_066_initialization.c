
/* ==== unit_066_initialization @ 0045c8f8 ==== 
 * signature: undefined unit_066_initialization(void)
 * body: 0045c8f8-0045c94d
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_066_initialization(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac904 == 0;
  _DAT_004ac904 = _DAT_004ac904 + -1;
  if (bVar1) {
    FUN_0041b6dc(&PTR_TPicture_vmt_000_0041702c,CONCAT22((short)((uint)param_2 >> 0x10),0x82),
                 (int)&PTR_TPersistent_vmt_000_0045b71c);
    FUN_0041b6b8(&PTR_TPicture_vmt_000_0041702c,&DAT_0045c974,(undefined4 *)"Davilex DAD file",
                 &PTR_TPersistent_vmt_000_0045b71c);
    FUN_0041b6b8(&PTR_TPicture_vmt_000_0041702c,&DAT_0045c99c,(undefined4 *)"Windows AVI file",
                 &PTR_TPersistent_vmt_000_0045b71c);
  }
  return;
}


