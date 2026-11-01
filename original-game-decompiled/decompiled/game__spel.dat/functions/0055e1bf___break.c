
/* ==== __break @ 0055e1bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055e1bf-0055e1bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


