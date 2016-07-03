/*  NETMAJ-XUI -- X User Interface --  Copyright Notice
 *
 *      Copyright (c) 1995,1996 Todo Software All rights reserved.
 *
 *   You can redistribute it and/or modify this software under the terms
 *  of the GNU General Public License version 2 as published by
 *  the Free Software Foundation.
 *
 *   This software is provided 'as-is', without any express or implied
 *  warranty.  In no event will the author be held liable for any damages
 *  arising from the use of this software.
 *
 *   Todo Software : NBC02365@niftyserve.or.jp
 */
/*  -*- Mode: C -*- 
 * This file is part of xui
 *
 * lang.c -- 
 *
 * Author          : NBC02365@niftyserve.or.jp
 * Created On      : Thu Jan 25 22:51:47 1996
 * Last Modified By: NBC02365@niftyserve.or.jp
 * Last Modified On: Thu Jan 25 22:51:53 1996
 * 
 * Copyright (C) 1995,1996 Todo Software All rights reserved.
 */

#include "xnet.h"

#define xconfig(but, text, font) \
   if (but) {\
	       widget_configure(but, resource_text, text);\
	       widget_configure(but, resource_textfont, font);\
   }

static void
lang_english ()
{
  xconfig (config_button, "config", TIMESI);
  xconfig (flush_button, "flush", TIMESI);
  xconfig (visible_button, "visible", TIMESI);
  xconfig (speed_button, "speed", TIMESI);
  xconfig (autoplay_button, "autoplay", TIMESI);
  xconfig (auto_after_reach_button, "auto(R)", TIMESI);
  xconfig (about_button, "about", TIMESI);
  xconfig (quit_button, "quit", TIMESI);
  xconfig (rule_button, "rule", TIMESI);

  xconfig (rankbutton, "rank", TIMESIB);
  xconfig (testpaibutton, "pai test", TIMESIB);
  xconfig (totalbutton, "info", TIMESIB);
  xconfig (bdcolorbutton, "color", TIMESIB);
  xconfig (configbutton, "config", TIMESIB);

  xconfig (configsavebutton, "set/save", TIMESIB);
  xconfig (configbyebutton, "cancel", TIMESIB);

  xconfig (pointokbutton, "ok", TIMESIB);
  xconfig (gameendokbutton, "ok", TIMESIB);
  xconfig (rankokbutton, "ok", TIMESIB);
  xconfig (playinfookbutton, "ok", TIMESIB);
  xconfig (aboutokbutton, "ok", TIMESIB);

  xconfig (configbyebutton, "cancel", TIMESIB);

  xconfig (quicklogbutton, "quicklog", TIMESIB);

  xconfig (rankmoneybutton, "money", TIMESIB);
  xconfig (rankpointbutton, "point", TIMESIB);
  xconfig (rankfuributton, "furi", TIMESIB);
}

static void
lang_jp ()
{
#ifndef ENGLISH
  xconfig (config_button, "����", TINYJP);
  xconfig (flush_button, "��ľ��", TINYJP);
  xconfig (visible_button, "�ա�����", TINYJP);
  xconfig (speed_button, "speed", TINYJP);
  xconfig (autoplay_button, "��ư����", TINYJP);
  xconfig (auto_after_reach_button, "��ư(R)", TINYJP);
  xconfig (about_button, "���Ф���", TINYJP);
  xconfig (quit_button, "��λ", TINYJP);
  xconfig (rule_button, "�롼��", TINYJP);

  xconfig (rankbutton, "���", MEDIUMJP);
  xconfig (testpaibutton, "�ѥ�", MEDIUMJP);
  xconfig (totalbutton, "����", MEDIUMJP);
  xconfig (bdcolorbutton, "�פο�", MEDIUMJP);
  xconfig (configbutton, "����", MEDIUMJP);

  xconfig (configsavebutton, "����/��¸", MEDIUMJP);
  xconfig (configbyebutton, "��λ", MEDIUMJP);

  xconfig (pointokbutton, "λ��", MEDIUMJP);
  xconfig (gameendokbutton, "λ��", MEDIUMJP);
  xconfig (rankokbutton, "λ��", MEDIUMJP);
  xconfig (playinfookbutton, "λ��", MEDIUMJP);
  xconfig (aboutokbutton, "λ��", MEDIUMJP);

  xconfig (quicklogbutton, "����", MEDIUMJP);

  xconfig (rankmoneybutton, "������", MEDIUMJP);
  xconfig (rankpointbutton, "�ݥ����", MEDIUMJP);
  xconfig (rankfuributton, "����", MEDIUMJP);

#endif
}


void
lang_set_cancel (int mode)
{
  extern integer_t yellow, white;
  static int cur_mode;

  if (mode < 0)
    mode = cur_mode;

  if (flag_original == 1)
    {
      if (mode == 0)
        {
          xconfig (cancel_button, "cancel", TIMESIB);
        }
      else if (mode == 1)
        {
          xconfig (cancel_button, "ok", TIMESIB);
        }
    }
  else
    {
      if (mode == 0)
        {
          xconfig (cancel_button, "̵��", MEDIUMJP);
        }
      else if (mode == 1)
        {
          xconfig (cancel_button, "λ��", MEDIUMJP);
        }
    }
  widget_configure (cancel_button, resource_textcolor, yellow);
  cur_mode = mode;
}

void
lang_set_auto ()
{
  extern integer_t yellow, white;
  extern int player_cnt;
  extern global_t *game_global;
  global_t *gp;

  gp = game_global;

  if (!auto_button)
    return;
  if (flag_original)
    {
      switch (in_game)
        {
        case 0:
          xconfig (auto_button, "run auto", TIMESI);
          break;
        case 1:
          xconfig (auto_button, "stop", TIMESI);
          break;
        case 2:
          xconfig (auto_button, "restart", TIMESI);
          break;
        }
    }
  else
    {
      switch (in_game)
        {
        case 0:
          xconfig (auto_button, "������", TINYJP);
          break;
        case 1:
          xconfig (auto_button, "����", TINYJP);
          break;
        case 2:
          xconfig (auto_button, "����³", TINYJP);
          break;
        }
    }
  widget_configure (auto_button, resource_textcolor, white);
}

void
lang_set_advice (int mode)
{
  extern integer_t yellow, white;
  static int cur_mode;

  if (mode < 0)
    mode = cur_mode;

  if (flag_original == 1)
    {
      if (mode == 0)
        {
          xconfig (advice_button, "advice", TIMESI);
        }
      else if (mode == 1)
        {
          xconfig (advice_button, "quicklog", TIMESI);
        }
    }
  else
    {
      if (mode == 0)
        {
          xconfig (advice_button, "������", MEDIUMJP);
        }
      else if (mode == 1)
        {
          xconfig (advice_button, "����", MEDIUMJP);
        }
    }
  widget_configure (advice_button, resource_textcolor, mode ? yellow : white);
  cur_mode = mode;
}

void
lang_set ()
{
  lang_set_cancel (-1);
  lang_set_auto ();
  if (BUILD4)
    {
      lang_set_advice (-1);
    }

  if (flag_original == 1)
    {
      lang_english ();
    }
  else
    {
      lang_jp ();
    }
}

char *conf_str_eng[] = {
  "Sound",
  "Pause after pai open",
  "Display Advice function",
  "Display Advice Always",
  "Number of remained pai",
  "Ta-pai advice",
  "Pais in reveal",
  "BoardColor ",
  "English action button/message",
  "Enable talk message",
  "Cancel button",
  "Talk Tick",
  "Current white line",
  "Current mark",
  "Talk String Execution",
  "Strong computer player",
  "Use redraw sfx",
  "Display only request button"
};

char *conf_str_jp[] = {
  "������ɡʸ��̲���",
  "�ѥ������ץ��ݡ���",
  "���ɥХ����ܥ�������",
  "��˥��ɥХ�����ɽ��",
  "���׿�����",
  "���ץ��ɥХ���",
  "��ʪ�׾���",
  "�������פο�",
  "�Ѹ쥢�������ܥ���/��å�����",
  "���Υȡ�����å�������ɽ��",
  "�ܡ��ɤΥ���󥻥�ܥ�������",
  "�ȡ�����å�������ɽ������",
  "���֤�������ɽ��",
  "���֤�ޡ�����ɽ��",
  "�ȡ���ʸ�������#!̿��¹Ԥ�Ԥ�",
  "���ͤ��륳��ԥ塼���ץ졼�������",
  "���̽񴹤��ΤȤ����̸��̤���Ѥ���",
  "ɬ�פʥ��������ܥ����������Ѥ���"
};

void
lang_config (widget_t w, int n)
{
  if (flag_original == 1)
    {
      xconfig (w, conf_str_eng[n], LARGETIMESIB);
    }
  else
    {
      xconfig (w, conf_str_jp[n], MEDIUMJP);
    }
}
