/*
 * Copyright (C) 2011 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TIPSWIDGET_H
#define TIPSWIDGET_H

#include <QWidget>
#include <QBoxLayout>

class TrayWidget;
class TrayApplet : public QWidget
{
    Q_OBJECT

public:
    explicit TrayApplet(QWidget *parent = 0);

    void clear();
    void addWidgets(QList<TrayWidget *> &widgets);

private:
    QBoxLayout *m_mainLayout;
};

#endif // TIPSWIDGET_H
