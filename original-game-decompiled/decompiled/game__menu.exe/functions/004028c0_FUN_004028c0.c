
/* ==== FUN_004028c0 @ 004028c0 ==== 
 * signature: undefined4 __register FUN_004028c0(void)
 * body: 004028c0-004028d5
 */

undefined4 FUN_004028c0(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_0040655c();
  uVar1 = *(undefined4 *)((int)pvVar2 + 4);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  return uVar1;
}


