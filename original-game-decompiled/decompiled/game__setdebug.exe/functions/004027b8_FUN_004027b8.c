
/* ==== FUN_004027b8 @ 004027b8 ==== 
 * signature: undefined4 __register FUN_004027b8(void)
 * body: 004027b8-004027cd
 */

undefined4 FUN_004027b8(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_00405fa4();
  uVar1 = *(undefined4 *)((int)pvVar2 + 4);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  return uVar1;
}


