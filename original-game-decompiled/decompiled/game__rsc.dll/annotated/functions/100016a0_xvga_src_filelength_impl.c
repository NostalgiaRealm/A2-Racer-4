
/* ==== xvga_src_filelength_impl @ 100016a0 ==== 
 * signature: undefined __cdecl xvga_src_filelength_impl(int param_1)
 * body: 100016a0-1000177f
 * note: ANALYST: File length, or member size for the archive. [confidence: confirmed] [evidence: export thunk jumps here; code read]
 */

/* ANALYST: File length, or member size for the archive. [confidence: confirmed] [evidence: export
   thunk jumps here; code read] */

void __cdecl xvga_src_filelength_impl(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  uint local_c;
  uint local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    local_8 = FUN_10015690(param_1);
    FUN_100155d0(local_8);
  }
  else {
    iVar2 = FUN_10015690(param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      local_c = FUN_10015690(param_1);
      FUN_100155d0(local_c);
    }
  }
  local_8 = 0x1000177c;
  __chkesp();
  return;
}


