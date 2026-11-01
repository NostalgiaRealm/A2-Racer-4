
/* ==== xvga_fileio_set_check_sequence_impl @ 100013f0 ==== 
 * signature: undefined __cdecl xvga_fileio_set_check_sequence_impl(int param_1)
 * body: 100013f0-10001454
 * note: ANALYST: Sets a 0/1 flag; 1 makes open bypass the archive and use loose files. [confidence: confirmed] [evidence: export thunk jumps here; code read]
 */

/* ANALYST: Sets a 0/1 flag; 1 makes open bypass the archive and use loose files. [confidence:
   confirmed] [evidence: export thunk jumps here; code read] */

void __cdecl xvga_fileio_set_check_sequence_impl(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  if ((param_1 < 0) || (1 < param_1)) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else {
    DAT_1003140c = param_1;
  }
  local_8 = 0x10001451;
  __chkesp();
  return;
}


