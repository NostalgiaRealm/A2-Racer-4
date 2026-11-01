
/* ==== xvga_get_filehandle @ 1000102d ==== 
 * signature: undefined __cdecl xvga_get_filehandle(int param_1)
 * body: 1000102d-10001031
 * thunk to: FUN_10001d10
 */

void __cdecl xvga_get_filehandle(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x102d  4  xvga_get_filehandle */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10002850(*(uint *)(param_1 + 0x10));
  uStack_8 = 0x10001d44;
  __chkesp();
  return;
}


