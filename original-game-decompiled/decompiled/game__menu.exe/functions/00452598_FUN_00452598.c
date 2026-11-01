
/* ==== FUN_00452598 @ 00452598 ==== 
 * signature: undefined __register FUN_00452598(undefined4 param_1)
 * body: 00452598-004525b9;004525da-0045264f
 */

void FUN_00452598(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_ffffffdc;
  char *pcVar2;
  char *pcVar3;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  switch(param_1) {
  case 0:
    pcVar3 = "WindowsToDaviMsgResult: ";
    pcVar2 = "Not enough memory to create message box.";
    puStack_10 = &stack0xfffffffc;
    FUN_00405808(&PTR_DAT_00452590,(int *)&local_8);
    in_stack_ffffffdc = local_8;
    uVar1 = FUN_00453d0c((int *)&PTR_EDavilex_vmt_000_00453ba0,'\x01',(undefined4 *)0x0,local_8,
                         (undefined4 *)pcVar2,(undefined4 *)pcVar3);
    FUN_004036f4(uVar1);
    break;
  case 1:
    puStack_10 = &stack0xfffffffc;
    break;
  case 2:
    puStack_10 = &stack0xfffffffc;
    break;
  case 3:
    puStack_10 = &stack0xfffffffc;
    break;
  case 4:
    puStack_10 = &stack0xfffffffc;
    break;
  case 5:
    puStack_10 = &stack0xfffffffc;
    break;
  case 6:
    puStack_10 = &stack0xfffffffc;
    break;
  case 7:
    puStack_10 = &stack0xfffffffc;
    break;
  default:
    FUN_00403c40("WindowsToDaviMsgResult:  Unhandled case-part");
  }
  *in_FS_OFFSET = in_stack_ffffffdc;
  FUN_00403c5c((int *)&local_8);
  return;
}


