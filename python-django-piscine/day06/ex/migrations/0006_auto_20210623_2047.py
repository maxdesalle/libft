# Generated by Django 3.2.4 on 2021-06-23 20:47

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('ex', '0005_auto_20210623_2003'),
    ]

    operations = [
        migrations.AddField(
            model_name='tip',
            name='downstats',
            field=models.SmallIntegerField(default=0),
        ),
        migrations.AddField(
            model_name='tip',
            name='upstats',
            field=models.SmallIntegerField(default=0),
        ),
    ]
