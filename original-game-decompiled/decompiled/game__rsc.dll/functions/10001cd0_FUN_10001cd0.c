
/* ==== FUN_10001cd0 @ 10001cd0 ==== 
 * signature: undefined4 __cdecl FUN_10001cd0(int param_1)
 * body: 10001cd0-10001cfe
 */

undefined4 __cdecl FUN_10001cd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x18 + param_1 * 0x1c);
}


