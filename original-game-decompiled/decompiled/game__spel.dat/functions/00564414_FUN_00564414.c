
/* ==== FUN_00564414 @ 00564414 ==== 
 * signature: undefined4 __stdcall FUN_00564414(void)
 * body: 00564414-005645e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00564414(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_0074dfaa;
  if (DAT_0074dcec == 0) {
    FUN_00559d4e(DAT_0074df78);
    FUN_00559d4e(DAT_0074df7c);
    FUN_00559d4e(DAT_0074df80);
    DAT_0074df78 = (LPVOID)0x0;
    DAT_0074df7c = (LPVOID)0x0;
    DAT_0074df80 = (char *)0x0;
    pvVar4 = _malloc(2);
    *(void **)PTR_PTR_005c7ec0 = pvVar4;
    if (*(uint **)PTR_PTR_005c7ec0 != (uint *)0x0) {
      FUN_0055ee40(*(uint **)PTR_PTR_005c7ec0,(uint *)&DAT_005b159c);
      pvVar4 = _malloc(2);
      *(void **)(PTR_PTR_005c7ec0 + 4) = pvVar4;
      if (*(undefined1 **)(PTR_PTR_005c7ec0 + 4) != (undefined1 *)0x0) {
        **(undefined1 **)(PTR_PTR_005c7ec0 + 4) = 0;
        pvVar4 = _malloc(2);
        *(void **)(PTR_PTR_005c7ec0 + 8) = pvVar4;
        if (*(undefined1 **)(PTR_PTR_005c7ec0 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(PTR_PTR_005c7ec0 + 8) = 0;
          DAT_005c837c = **(undefined1 **)PTR_PTR_005c7ec0;
          _DAT_005c8380 = 1;
          return 0;
        }
      }
    }
  }
  else {
    iVar1 = FUN_00567884(1,uVar5,0xe,(char *)&DAT_0074df78);
    iVar2 = FUN_00567884(1,uVar5,0xf,(char *)&DAT_0074df7c);
    iVar3 = FUN_00567884(1,uVar5,0x10,(char *)&DAT_0074df80);
    FUN_005647d6(DAT_0074df80);
    if ((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) {
      if (*(undefined **)PTR_PTR_005c7ec0 != &DAT_005c7e88) {
        FUN_00559d4e(*(undefined **)PTR_PTR_005c7ec0);
        FUN_00559d4e(*(LPVOID *)(PTR_PTR_005c7ec0 + 4));
        FUN_00559d4e(*(LPVOID *)(PTR_PTR_005c7ec0 + 8));
      }
      *(LPVOID *)PTR_PTR_005c7ec0 = DAT_0074df78;
      *(LPVOID *)(PTR_PTR_005c7ec0 + 4) = DAT_0074df7c;
      *(char **)(PTR_PTR_005c7ec0 + 8) = DAT_0074df80;
      DAT_005c837c = **(undefined1 **)PTR_PTR_005c7ec0;
      _DAT_005c8380 = 1;
      return 0;
    }
    FUN_00559d4e(DAT_0074df78);
    FUN_00559d4e(DAT_0074df7c);
    FUN_00559d4e(DAT_0074df80);
    DAT_0074df78 = (LPVOID)0x0;
    DAT_0074df7c = (LPVOID)0x0;
    DAT_0074df80 = (char *)0x0;
  }
  return 0xffffffff;
}


