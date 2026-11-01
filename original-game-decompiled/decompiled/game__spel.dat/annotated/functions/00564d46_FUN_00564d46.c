
/* ==== FUN_00564d46 @ 00564d46 ==== 
 * signature: uint __stdcall FUN_00564d46(char * param_1)
 * body: 00564d46-00564f49
 */

uint FUN_00564d46(char *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char local_7c [120];
  
  iVar1 = FUN_00565337(param_1);
  iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfb8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_0074dfc8,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfc0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_0074dfcc = 0;
      return 1;
    }
    iVar2 = __strcmpi((char *)DAT_0074dfc4,local_7c);
    if (iVar2 == 0) {
      DAT_0074dfcc = DAT_0074dfcc | 0x304;
      DAT_0074dfd0 = iVar1;
LAB_00564dec:
      DAT_0074dfb4 = iVar1;
    }
    else if ((DAT_0074dfcc & 2) == 0) {
      if ((DAT_0074dfbc == (void *)0x0) ||
         (iVar2 = FUN_00567c10(DAT_0074dfc4,local_7c,DAT_0074dfbc), iVar2 != 0)) {
        if (((DAT_0074dfcc & 1) == 0) && (iVar2 = FUN_0056519a((short)iVar1), iVar2 != 0)) {
          DAT_0074dfcc = DAT_0074dfcc | 1;
          DAT_0074dfd0 = iVar1;
        }
      }
      else {
        DAT_0074dfcc = DAT_0074dfcc | 2;
        DAT_0074dfd0 = iVar1;
        pvVar3 = (void *)_strlen((char *)DAT_0074dfc4);
        if (pvVar3 == DAT_0074dfbc) goto LAB_00564dec;
      }
    }
  }
  if ((DAT_0074dfcc & 0x300) == 0x300) goto LAB_00564f36;
  iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfc0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    return 1;
  }
  iVar2 = __strcmpi((char *)DAT_0074dfc4,local_7c);
  if (iVar2 == 0) {
    DAT_0074dfcc = DAT_0074dfcc | 0x200;
    if (((DAT_0074dfc0 == 0) && (DAT_0074dfbc != (void *)0x0)) &&
       (pvVar3 = (void *)_strlen((char *)DAT_0074dfc4), pvVar3 == DAT_0074dfbc)) {
      iVar2 = 1;
      goto LAB_00564f15;
    }
  }
  else {
    if (((DAT_0074dfc0 != 0) || (DAT_0074dfbc == (void *)0x0)) ||
       (iVar2 = FUN_00567c10(DAT_0074dfc4,local_7c,DAT_0074dfbc), iVar2 != 0)) goto LAB_00564f36;
    iVar2 = 0;
LAB_00564f15:
    iVar2 = FUN_005651b9(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_00564f36;
  }
  DAT_0074dfcc = DAT_0074dfcc | 0x100;
  if (DAT_0074dfb4 == 0) {
    DAT_0074dfb4 = iVar1;
  }
LAB_00564f36:
  return ~DAT_0074dfcc >> 2 & 1;
}


