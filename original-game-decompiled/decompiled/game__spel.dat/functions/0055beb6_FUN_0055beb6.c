
/* ==== FUN_0055beb6 @ 0055beb6 ==== 
 * signature: uint * __cdecl FUN_0055beb6(uint * param_1, uint * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 0055beb6-0055bfcd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_0055beb6(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
LAB_0055bf5c:
    puVar2 = (uint *)0x0;
  }
  else {
    if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0x43;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined2 *)param_3 = 0;
        *(undefined2 *)((int)param_3 + 2) = 0;
        *(undefined2 *)(param_3 + 1) = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_005c82a8,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_005c8224,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_0055bff3((char *)local_8c,(byte *)param_1);
      if ((iVar1 != 0) ||
         (iVar1 = FUN_00564aea((char *)local_8c,(undefined2 *)&DAT_0074dcd0,(int)local_8c),
         iVar1 == 0)) goto LAB_0055bf5c;
      _DAT_0074dcd8 = (uint)DAT_0074dcd4;
      FUN_0055c0bf((uint *)&DAT_005c82a8,local_8c);
      if ((char)*param_1 == '\0') {
        param_1 = (uint *)&DAT_005c82a8;
      }
      FUN_0055ee40((uint *)&DAT_005c8224,param_1);
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_0055b3c0(param_3,(undefined4 *)&DAT_0074dcd0,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_0055b3c0(param_4,(undefined4 *)&DAT_0074dcd8,4);
    }
    FUN_0055ee40(param_2,(uint *)&DAT_005c82a8);
    puVar2 = (uint *)&DAT_005c82a8;
  }
  return puVar2;
}


