
/* ==== FUN_004bc200 @ 004bc200 ==== 
 * signature: undefined __thiscall FUN_004bc200(void * this, int param_1)
 * body: 004bc200-004bc21f;004bc223-004bc27e;004bc282-004bc2ad;004bc2b5-004bc2e0;004bc2e8-004bc309;004bc30d-004bc338;004bc340-004bc36b;004bc36f-004bc396;004bc39e-004bc3bd;004bc3c1-004bc3e8;004bc3ec-004bc3ef
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bc220-004bc222 004bc27f-004bc281 004bc2ae-004bc2b4 004bc2e1-004bc2e7 004bc30a-004bc30c 004bc339-004bc33f 004bc36c-004bc36e 004bc397-004bc39d 004bc3be-004bc3c0 004bc3e9-004bc3eb
 */

void __thiscall FUN_004bc200(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x274) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  *(int *)((int)this + 0x2bd) = param_1;
  if (param_1 == 0) {
    piVar1 = *(int **)((int)this + 0x25c);
    if (*(char *)((int)this + 0x2a0) == '\x01') {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,3);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b22f4);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                        (*(int **)((int)this + 0x25c),0x12,3);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b22f4);
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,1);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b22bc);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                        (*(int **)((int)this + 0x25c),0x12,1);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b22bc);
      }
    }
  }
  else {
    piVar1 = *(int **)((int)this + 0x25c);
    if (*(char *)((int)this + 0x2a0) == '\x01') {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,6);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                          (*(int **)((int)this + 0x25c),0x12,6);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b2338);
        }
      }
      else {
        iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                          (*(int **)((int)this + 0x25c),0x11,4);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b2370);
        }
        iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                          (*(int **)((int)this + 0x25c),0x12,4);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b2370);
        }
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,2);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b2338);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                        (*(int **)((int)this + 0x25c),0x12,2);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_set_filter_mod_005b2338);
      }
    }
  }
  return;
}


