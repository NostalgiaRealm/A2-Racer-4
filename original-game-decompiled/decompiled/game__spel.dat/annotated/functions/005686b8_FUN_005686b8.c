
/* ==== FUN_005686b8 @ 005686b8 ==== 
 * signature: uint * __cdecl FUN_005686b8(uint * param_1)
 * body: 005686b8-005686e2
 */

uint * __cdecl FUN_005686b8(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_0055ee40(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}


